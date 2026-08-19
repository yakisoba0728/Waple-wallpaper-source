// Function: reset_buffers<>
// Addr: 1402bfe90
// Size: 50 bytes


/* Library Function - Multiple Matches With Same Base Name
    void __cdecl reset_buffers<wchar_t,class <lambda_0277a25b003605e5dd2953a42296bac5> >(struct
   `anonymous namespace'::component_buffers<wchar_t> * __ptr64 const,class
   <lambda_0277a25b003605e5dd2953a42296bac5>)
    void __cdecl reset_buffers<wchar_t,class <lambda_9b662e55f7b653f047dcee48bfdefb5a> >(struct
   `anonymous namespace'::component_buffers<wchar_t> * __ptr64 const,class
   <lambda_9b662e55f7b653f047dcee48bfdefb5a>)
    void __cdecl reset_buffers<wchar_t,class <lambda_f4d89ce576adf8640f5662d60a8d4afb> >(struct
   `anonymous namespace'::component_buffers<wchar_t> * __ptr64 const,class
   <lambda_f4d89ce576adf8640f5662d60a8d4afb>)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void reset_buffers<>(undefined8 *param_1)

{
  if ((undefined2 *)*param_1 != (undefined2 *)0x0) {
    *(undefined2 *)*param_1 = 0;
  }
  if ((undefined2 *)param_1[2] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[2] = 0;
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  if ((undefined2 *)param_1[6] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[6] = 0;
  }
  return;
}

