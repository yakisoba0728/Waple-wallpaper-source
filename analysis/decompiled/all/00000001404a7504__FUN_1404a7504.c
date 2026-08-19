// Function: FUN_1404a7504
// Addr: 1404a7504
// Size: 1 bytes


void FUN_1404a7504(undefined1 *param_1,uint *param_2)

{
  char cVar1;
  code *pcVar2;
  char in_AL;
  byte bVar3;
  undefined7 in_register_00000001;
  char unaff_BH;
  longlong unaff_RSI;
  longlong unaff_GS_OFFSET;
  
  bVar3 = in_AL - 0x1c;
  *(byte *)CONCAT71(in_register_00000001,bVar3) =
       *(char *)CONCAT71(in_register_00000001,bVar3) + bVar3;
  *(uint *)(unaff_GS_OFFSET + (longlong)param_2) =
       *(uint *)(unaff_GS_OFFSET + (longlong)param_2) | (uint)param_1;
  *(char *)((longlong)param_2 + 9) =
       *(char *)((longlong)param_2 + 9) + (char)((ulonglong)param_1 >> 8);
  cVar1 = (bVar3 | *(byte *)CONCAT71(in_register_00000001,bVar3)) + 0x8c;
  *param_1 = *param_1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)param_2 = (char)*param_2 + unaff_BH;
  *param_2 = *param_2 | (uint)param_1;
  *(char *)(unaff_RSI + 9) = *(char *)(unaff_RSI + 9) + (char)param_2;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

