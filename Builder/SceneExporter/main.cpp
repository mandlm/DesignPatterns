#include <iostream>

#include "scene.h"

#include "objfileconverter.h"
#include "statscollector.h"

#include "scenereader.h"

int main(int argc, char **argv)
{
    Scene scene = Scene::createSampleScene();

    ObjFileConverter objFileConverter;
    SceneReader sceneToObjFileReader(scene, objFileConverter);
    sceneToObjFileReader.construct();
    std::string objFileData = objFileConverter.getResult();

    std::cout << "Obj file data:" << std::endl << std::endl;
    std::cout << objFileData << std::endl << std::endl;

    StatsCollector statsCollector;
    SceneReader statsCollectorReader(scene, statsCollector);
    statsCollectorReader.construct();
    std::string stats = statsCollector.getResult();

    std::cout << "Stats:" << std::endl << std::endl;
    std::cout << stats << std::endl << std::endl;

	return 0;
}
