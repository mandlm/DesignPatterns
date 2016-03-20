#include <iostream>

#include "scene.h"
#include "objfileconverter.h"
#include "scenereader.h"

int main(int argc, char **argv)
{
    Scene scene = Scene::createSampleScene();

    ObjFileConverter objFileConverter;
    SceneReader sceneToObjFileReader(scene, objFileConverter);

    sceneToObjFileReader.construct();

    std::string objFileData = objFileConverter.getResult();

    std::cout << "Obj file data:" << std::endl << std::endl;

    std::cout << objFileData << std::endl;

	return 0;
}
