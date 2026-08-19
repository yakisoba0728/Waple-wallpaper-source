// Function: FUN_14049e330
// Addr: 14049e330
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e330(int *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint *in_RAX;
  char cVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined4 *unaff_RSI;
  int *piVar5;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)param_1;
  uVar4 = *in_RAX;
  pbVar2 = (byte *)((longlong)unaff_RSI + param_2 * 8 + 2);
  *pbVar2 = *pbVar2 | (byte)((ulonglong)in_RAX >> 8);
  uVar4 = *(int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)uVar4) * 0x6a9400;
  piVar5 = (int *)(ulonglong)uVar4;
  *(char *)(param_2 + 0x49) = *(char *)(param_2 + 0x49) + (char)param_1;
  *(char *)param_1 = (char)*param_1 + (char)(uVar4 >> 8);
  *(char *)piVar5 = (char)*piVar5;
  iVar3 = *piVar5;
  piVar5 = (int *)(ulonglong)(uint)(iVar3 * 0x6a9400);
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11(cVar6,(char)param_2 + unaff_BH)) + 0x49);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(char *)param_1 = (char)*param_1 + (char)((uint)(iVar3 * 0x6a9400) >> 8);
  *(char *)piVar5 = (char)*piVar5;
  *(char *)((longlong)piVar5 + -0x5ffff97) = *(char *)((longlong)piVar5 + -0x5ffff97) + cVar6;
  iVar3 = *piVar5;
  *(char *)param_1 = (char)*param_1;
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       ((byte)((uint)(iVar3 * 0x49e23c00) >> 8) & (byte)((uint)*unaff_RSI >> 8));
  *param_1 = *param_1 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

