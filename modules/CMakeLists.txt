cmake_minimum_required(VERSION 3.0.0)
project(TemplateBase VERSION 0.1.0)

add_library(TemplateBase template_base.hpp template_base.cpp)

project(TemplateBorn VERSION 0.1.0)

add_library(TemplateBorn template_born.hpp template_born.cpp)
target_link_libraries(  TemplateBorn PUBLIC
                        TemplateBase                        
)