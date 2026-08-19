// Function: FUN_1404b5b28
// Addr: 1404b5b28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5b28(uint *param_1)

{
  char cVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char *pcVar2;
  
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = (char)in_RAX + '4';
  pcVar2 = (char *)CONCAT71(uVar3,cVar1);
  if (!SBORROW1(cVar1,*pcVar2)) {
    *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 & (uint)CONCAT71(uVar3,cVar1 - *pcVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

