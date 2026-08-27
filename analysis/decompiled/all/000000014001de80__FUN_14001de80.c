// Function: FUN_14001de80
// Addr: 14001de80
// Size: 86 bytes


undefined8 FUN_14001de80(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  
  if ((((0xf < *(uint *)(param_1 + 8)) &&
       (piVar1 = *(int **)(param_1 + 0x10), *piVar1 == 0x27977599)) && (piVar1[1] == -0x3a749bb2))
     && ((piVar1[2] == 0x3d427e3b && (piVar1[3] == -0x6f949efe)))) {
    FUN_14000f880(param_2,piVar1 + 4,*(uint *)(param_1 + 8) - 0x10);
    return 1;
  }
  return 0;
}

