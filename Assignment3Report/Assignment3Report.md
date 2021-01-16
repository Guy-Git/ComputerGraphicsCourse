#  1. Renderer::InitOpenGLRendering() explaination -

* The function creates a unique ID for one openGL texture and  
one for vertex array object using `glGenTextures` and `glGenVertexArrays` functions.
 
* We bind the VAO buffer to openGL using `glBindVertexArray` function. Now this buffer is the current one.
* The buffer `buffer` is responsible for transferring data to the GPU, but we first need to   
allocate and bind this buffer using `glGenBuffers`, `glBindBuffer` and `glBufferData` .    

* The transfer of the data is divided into two parts, which done in `glBufferSubData` and `glBufferSubData`.   
* Now we load and compile the shaders using `InitShader` function.  This function is responsible for attaching openGL data to GLSL variables.    
 In order to use this program, we need to call `glUseProgram` function with `program` (ID of program).  
* Passing data to shader (vertex position and texture coordinates) and tells the shader where to look for those variables using `glGetAttribLocation` and `glGetAttribLocation`.
 
* Enables those variables using `glEnableVertexAttribArray` and `glEnableVertexAttribArray`.  
* Setting uniform variables using `glUniform1i`.   

# 2. 