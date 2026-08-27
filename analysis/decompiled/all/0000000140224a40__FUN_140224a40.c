// Function: FUN_140224a40
// Addr: 140224a40
// Size: 152 bytes


ulonglong FUN_140224a40(longlong *param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x80))();
  uVar3 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar3;
  uVar3 = puVar4[3];
  param_2[2] = puVar4[2];
  param_2[3] = uVar3;
  uVar3 = puVar4[5];
  param_2[4] = puVar4[4];
  param_2[5] = uVar3;
  uVar3 = puVar4[7];
  param_2[6] = puVar4[6];
  param_2[7] = uVar3;
  plVar2 = (longlong *)param_1[0x5d];
  if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
    *(longlong *)param_3 = plVar2[0x37];
    param_3[2] = *(float *)(plVar2 + 0x38);
    *(undefined8 *)param_4 = *(undefined8 *)((longlong)plVar2 + 0x1c4);
    fVar1 = *(float *)((longlong)plVar2 + 0x1cc);
    param_4[2] = fVar1;
    return (ulonglong)
           CONCAT31((int3)((uint)fVar1 >> 8),*param_3 <= *param_4 && *param_4 != *param_3);
  }
  return (ulonglong)puVar4 & 0xffffffffffffff00;
}

