// Function: FUN_1404d25e0
// Addr: 1404d25e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d25e0(undefined8 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined6 uVar7;
  longlong unaff_RBP;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar6 = (undefined1)((ulonglong)param_1 >> 8);
  uVar5 = (undefined1)param_1;
  pcVar2 = (code *)swi(0x39);
  pcVar4 = (char *)(*pcVar2)();
  pcVar1 = (char *)(unaff_RBP + 0x16d80039 + CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) * 8);
  cVar3 = (char)pcVar4;
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) + '\b';
  *pcVar4 = *pcVar4 + cVar3;
  pcVar4[-0x33] = pcVar4[-0x33] + cVar3;
  *(char *)CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

