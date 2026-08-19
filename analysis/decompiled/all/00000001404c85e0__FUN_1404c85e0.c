// Function: FUN_1404c85e0
// Addr: 1404c85e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c85e0(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint *in_RAX;
  uint *puVar5;
  char *pcVar7;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char *pcVar6;
  
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> 1;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  lVar1 = (longlong)*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  uVar2 = (ulonglong)param_2 << 0x20 | (ulonglong)in_RAX & 0xffffffff;
  uVar3 = (longlong)uVar2 / lVar1;
  puVar5 = (uint *)(uVar3 & 0xffffffff);
  pcVar7 = (char *)((longlong)uVar2 % lVar1 & 0xffffffff);
  *puVar5 = *puVar5 ^ (uint)uVar3;
  cVar4 = in((short)pcVar7);
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)puVar5 >> 8),cVar4);
  *pcVar6 = *pcVar6 + cVar4;
  cVar4 = cVar4 + (char)pcVar7;
  pcVar6 = (char *)CONCAT62((int6)((ulonglong)puVar5 >> 0x10),
                            CONCAT11((char)((ulonglong)puVar5 >> 8) +
                                     (char)((ulonglong)param_1 >> 8),cVar4));
  *pcVar7 = *pcVar7 + (char)param_1;
  *pcVar6 = *pcVar6 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

