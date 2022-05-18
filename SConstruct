

env = Environment(LIBS=['GLEW','glfw','assimp', 'GL'], 
    CPPFLAGS=['-std=c++17', '-g'],
                  CPPPATH=['/usr/include/GL',
                           'JGL_MeshLoader/source',
                           'JGL_MeshLoader/source/3rdparty/imgui-docking',
                           'JGL_MeshLoader/source/3rdparty/imgui-docking/backends',
                           'JGL_MeshLoader/source/3rdparty/plugins/imgui',
                           ],
                  LIBPATH = ['/usr/lib/x86_64-linux-gnu', '/usr/lib'],
)


app = env.Object('JGL_MeshLoader/source/application.cpp')
imgui_glfw = env.Object('JGL_MeshLoader/source/3rdparty/imgui-docking/backends/imgui_impl_glfw.cpp')
impl_opengl3 = env.Object('JGL_MeshLoader/source/3rdparty/imgui-docking/backends/imgui_impl_opengl3.cpp')
imgui = env.Object('JGL_MeshLoader/source/3rdparty/imgui-docking/imgui.cpp')
imgui_draw = env.Object('JGL_MeshLoader/source/3rdparty/imgui-docking/imgui_draw.cpp')
imgui_widgets = env.Object('JGL_MeshLoader/source/3rdparty/imgui-docking/imgui_widgets.cpp')
imgui_tables = env.Object('JGL_MeshLoader/source/3rdparty/imgui-docking/imgui_tables.cpp')
jgl_window = env.Object('JGL_MeshLoader/source/window/jgl_window.cpp')
shader_util = env.Object('JGL_MeshLoader/source/shader/shader_util.cpp')

mesh = env.Object('JGL_MeshLoader/source/elems/mesh.cpp')


ui_context = env.Object('JGL_MeshLoader/source/render/ui_context.cpp')
opengl_context = env.Object('JGL_MeshLoader/source/render/opengl_context.cpp')
opengl_buffer_manager = env.Object('JGL_MeshLoader/source/render/opengl_buffer_manager.cpp')

scene_view = env.Object('JGL_MeshLoader/source/ui/scene_view.cpp')
property_panel = env.Object('JGL_MeshLoader/source/ui/property_panel.cpp')

env.Program('main', ['JGL_MeshLoader/source/main.cpp', app,  imgui, imgui_draw, imgui_glfw, impl_opengl3, imgui_widgets, imgui_tables, jgl_window, shader_util, ui_context, opengl_context, opengl_buffer_manager, scene_view, property_panel, mesh])
