import json
import os
from pathlib import Path
def list_all_files(path):
    """
    List all file paths

    @param path: if it is a path, just return, if dir, return paths of files in it

    Subdirectories not listed
    No recursive search
    """
    assert os.path.isfile(path) or os.path.isdir(path)

    if os.path.isfile(path):
        return [path]
    else:
        return filter(os.path.isfile, map(lambda x: '/'.join([os.path.abspath(path), x]), os.listdir(path)))

foldername=r'virustotal' + str(4200)
path = r'./' +foldername


filename="./reports/virustotal4200/virustotal4200.json"
listObj=[]

names = []
for f in list_all_files(path):
    file = Path(f)
    names.append(os.path.basename(file).split('/')[-1])
    print("\n")
print(names)

with open(filename, "r") as outfile:
    listObj=json.load(outfile)
    print(len(listObj))
    for i in range(len(listObj)):
        listObj[i]["name"] = names[i]


with open(filename, "w") as outfile:
    json.dump(listObj, outfile)

