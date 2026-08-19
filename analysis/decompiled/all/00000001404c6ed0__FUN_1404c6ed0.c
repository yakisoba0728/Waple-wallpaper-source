// Function: FUN_1404c6ed0
// Addr: 1404c6ed0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6ed0(undefined8 param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined7 uVar4;
  undefined7 uVar5;
  char unaff_BL;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  undefined8 unaff_retaddr;
  char *pcVar3;
  
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  uVar4 = (undefined7)((ulonglong)unaff_retaddr >> 8);
  cVar2 = (char)unaff_retaddr + '/';
  pcVar3 = (char *)CONCAT71(uVar4,cVar2);
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  *(char *)CONCAT71(uVar5,0x2f) = *(char *)CONCAT71(uVar5,0x2f) + unaff_R12B;
  *param_2 = *param_2 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  in(0xd);
  pcVar3 = (char *)(CONCAT71(uVar4,0x2f) + -0x4f);
  *pcVar3 = *pcVar3 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

