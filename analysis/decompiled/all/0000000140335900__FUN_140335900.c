// Function: FUN_140335900
// Addr: 140335900
// Size: 272 bytes


void FUN_140335900(longlong *param_1,undefined8 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)((longlong)param_1 + 0x48c4) * (longlong)param_5;
  lVar3 = (longlong)(int)param_1[0x918] * (longlong)param_4;
  iVar1 = FUN_140336d40(param_2);
  lVar2 = (longlong)*(int *)(*param_1 + 0x4c) * (longlong)iVar1;
  lVar4 = (longlong)
          ((int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) +
          (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10));
  lVar3 = *(int *)(*param_1 + 0x44) * lVar4;
  *param_3 = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) +
             (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) +
             *(int *)((longlong)param_1 + 0x48cc);
  lVar2 = (longlong)*(int *)(*param_1 + 0x50) * (longlong)iVar1;
  lVar4 = *(int *)(*param_1 + 0x48) * lVar4;
  param_3[1] = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) +
               (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + (int)param_1[0x91a];
  return;
}

