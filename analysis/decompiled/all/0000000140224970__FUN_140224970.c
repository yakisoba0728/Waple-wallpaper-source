// Function: FUN_140224970
// Addr: 140224970
// Size: 204 bytes


void FUN_140224970(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_88 [64];
  undefined1 local_48 [72];
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if ((((lVar1 != 0) && (plVar2 = *(longlong **)(param_1 + 0x2e8), plVar2 != (longlong *)0x0)) &&
      (*plVar2 != 0)) && (-1 < param_2)) {
    lVar3 = plVar2[0x15];
    if (((ulonglong)(longlong)param_2 <
         (ulonglong)((plVar2[0x16] - lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5)) &&
       (*(longlong *)(lVar1 + 0x30) != *(longlong *)(lVar1 + 0x38))) {
      lVar4 = (longlong)param_2 * 0x68;
      uVar5 = FUN_14005ecb0(local_88,(ulonglong)*(uint *)(lVar4 + 0x60 + lVar3) * 0x40 +
                                     *(longlong *)(lVar1 + 0x30),lVar3 + lVar4 + 0x20);
      puVar6 = (undefined8 *)FUN_14005ecb0(local_48,uVar5,param_3);
      uVar5 = puVar6[1];
      *param_3 = *puVar6;
      param_3[1] = uVar5;
      uVar5 = puVar6[3];
      param_3[2] = puVar6[2];
      param_3[3] = uVar5;
      uVar5 = puVar6[5];
      param_3[4] = puVar6[4];
      param_3[5] = uVar5;
      uVar5 = puVar6[7];
      param_3[6] = puVar6[6];
      param_3[7] = uVar5;
    }
  }
  return;
}

