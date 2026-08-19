// Function: FUN_140162b90
// Addr: 140162b90
// Size: 202 bytes


void FUN_140162b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_e8 [176];
  
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e96a0) {
    FUN_14028b210(&DAT_1404e96a0);
    if (DAT_1404e96a0 == -1) {
      FUN_14028b4e0(0x140424cf0);
      FUN_14028b1a0(&DAT_1404e96a0);
    }
  }
  uVar1 = func_0x00014003a980(local_e8,s_shaders__1404dfd70,param_2);
  func_0x000140053370(uVar1,".vert",5);
  return;
}

