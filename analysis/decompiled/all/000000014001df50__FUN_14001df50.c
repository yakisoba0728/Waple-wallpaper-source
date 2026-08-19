// Function: FUN_14001df50
// Addr: 14001df50
// Size: 59 bytes


longlong FUN_14001df50(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((((0xf < uVar1) && (piVar2 = *(int **)(param_1 + 0x10), *piVar2 == 0x27977599)) &&
      (piVar2[1] == -0x3a749bb2)) && ((piVar2[2] == 0x3d427e3b && (piVar2[3] == -0x6f949efe)))) {
                    /* WARNING: Subroutine does not return */
    FUN_14000f950(param_2,piVar2 + 4,uVar1 - 0x10);
  }
  return (ulonglong)(uint3)(uVar1 >> 8) << 8;
}

