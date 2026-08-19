// Function: FUN_140335330
// Addr: 140335330
// Size: 273 bytes


ulonglong FUN_140335330(undefined8 param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = (longlong)((param_5[1] - param_4[1]) + 0x10 >> 5);
  lVar6 = (longlong)((*param_5 - *param_4) + 0x10 >> 5);
  lVar2 = (param_3[1] + (0x10 - param_2[1]) >> 5) * lVar6;
  lVar4 = (*param_3 + (0x10 - *param_2) >> 5) * lVar3;
  uVar1 = lVar4 >> 0x3f;
  iVar5 = (int)(lVar4 + 0x8000 + uVar1 >> 0x10) -
          (int)((ulonglong)((lVar2 >> 0x3f) + 0x8000 + lVar2) >> 0x10);
  if (iVar5 != 0) {
    lVar6 = (param_4[1] + (0x10 - param_2[1]) >> 5) * lVar6;
    lVar3 = (*param_4 + (0x10 - *param_2) >> 5) * lVar3;
    uVar1 = func_0x0001402efae0((int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) -
                                (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10),iVar5);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}

