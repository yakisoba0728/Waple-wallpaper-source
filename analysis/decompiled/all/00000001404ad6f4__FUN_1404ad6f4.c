// Function: FUN_1404ad6f4
// Addr: 1404ad6f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad6f4(void)

{
  uint uVar1;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *in_RAX;
  uint *puVar7;
  char unaff_BL;
  longlong unaff_RSI;
  char acStack_4ad5 [19149];
  uint uVar2;
  char *pcVar8;
  
  uVar5 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar5;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar6 = *in_RAX;
  *in_RAX = *in_RAX + uVar5;
  uVar1 = *in_RAX;
  uVar2 = *in_RAX;
  *in_RAX = uVar2 + uVar5 + (uint)CARRY4(uVar6,uVar5);
  puVar7 = (uint *)CONCAT71(0x1004a,-0x36 - (CARRY4(uVar1,uVar5) ||
                                            CARRY4(uVar2 + uVar5,(uint)CARRY4(uVar6,uVar5))));
  acStack_4ad5[unaff_RSI] = acStack_4ad5[unaff_RSI] + unaff_BL;
  uVar6 = (uint)puVar7 & *puVar7;
  cVar4 = (char)uVar6;
  cVar3 = cVar4 + -1;
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar3);
  *pcVar8 = (*pcVar8 - cVar3) - (cVar4 == '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

