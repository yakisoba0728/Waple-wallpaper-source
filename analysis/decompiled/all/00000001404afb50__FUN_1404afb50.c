// Function: FUN_1404afb50
// Addr: 1404afb50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404afb6d) overlaps instruction at (ram,0x0001404afb6c)
    */

void FUN_1404afb50(char *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *in_RAX;
  undefined7 uVar6;
  undefined4 *puVar5;
  byte bVar7;
  char unaff_BL;
  char *unaff_RSI;
  undefined1 in_YMM6 [32];
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1;
  bVar3 = (byte)in_RAX;
  *unaff_RSI = *unaff_RSI + bVar3;
  *in_RAX = *in_RAX + bVar3;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + bVar3;
  *(uint *)in_RAX = *(int *)in_RAX + (int)in_RAX + (uint)CARRY1(bVar2,bVar3);
  in_RAX[(longlong)param_2] = in_RAX[(longlong)param_2] + bVar7;
  pbVar1 = in_RAX + -0x34;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = bVar3 + CARRY1(bVar2,bVar7);
  vunpcklps_avx(in_YMM6,*(undefined1 (*) [32])CONCAT71(uVar6,cVar4));
  puVar5 = (undefined4 *)(CONCAT71(uVar6,cVar4) ^ 0xfa);
  *param_1 = *param_1 + (char)puVar5;
  *unaff_RSI = *unaff_RSI + ((byte)((ulonglong)in_RAX >> 8) | (byte)((uint)*puVar5 >> 8));
  *param_2 = *param_2 + (int)param_2;
  *(char *)param_2 = (char)*param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

