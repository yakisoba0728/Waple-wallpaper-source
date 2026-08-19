// Function: FUN_1404bea68
// Addr: 1404bea68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bea68(undefined8 param_1)

{
  char *pcVar1;
  undefined8 in_RAX;
  undefined1 uVar2;
  char cVar3;
  undefined6 uVar4;
  char unaff_BH;
  longlong unaff_RBP;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar2 = (undefined1)param_1;
  cVar3 = (char)((ulonglong)param_1 >> 8) + unaff_BH;
  pcVar1 = (char *)(CONCAT62(uVar4,CONCAT11(cVar3,uVar2)) + 0x4b + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,uVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,uVar2)) + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

