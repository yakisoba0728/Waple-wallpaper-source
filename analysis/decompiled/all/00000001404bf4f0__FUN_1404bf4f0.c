// Function: FUN_1404bf4f0
// Addr: 1404bf4f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf4f0(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  char unaff_BH;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  char *unaff_RDI;
  char in_ZF;
  undefined8 uStack_10;
  
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || in_ZF != '\0') {
    *param_4 = *param_4 + (char)in_RAX;
    *pcVar2 = *pcVar2 + unaff_BH;
    puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\x13';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

