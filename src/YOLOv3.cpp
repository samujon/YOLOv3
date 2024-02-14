#include <assert.h>

#include <chrono>
#include <vector>
#include <unordered_map>

#include "oneapi/dnnl/dnnl.hpp"
#include "/home/samjons/thesis/oneDNN/examples/example_utils.hpp"

using namespace dnnl;

void YOLOv3(engine::kind engine_kind){
    std::cout << "Entered YOLOv3" << std::endl;
    using tag = memory::format_tag;
    using dt = memory::data_type;   
    // Create an engine
    engine eng(engine_kind, 0);
    stream s(eng);

    //Create network
    std::cout << "Create network" << std::endl;
    std::vector<primitive> net;
    std::vector<std::unordered_map<int, memory>> net_args;
}


int main(int argc, char **argv) {
        auto begin = std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::steady_clock::now().time_since_epoch())
                .count();
        //std::cout << "Start time: " << begin << std::endl;
        YOLOv3(parse_engine_kind(argc, argv));
        auto end = std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::steady_clock::now().time_since_epoch())
                .count();
        std::cout << "YOLOv3 executed" << std::endl;
        //std::cout << "End time: " << end << std::endl;
        std::cout << "Total time:" << (end - begin)/1000.0 << "s" << std::endl;
}