// Function: FUN_1404bcf5c
// Addr: 1404bcf5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcf5c(void)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *unaff_RBP;
  
  lVar3 = func_0x0001404bcf71();
  cVar2 = '\x05';
  do {
    unaff_RBP = unaff_RBP + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  pcVar1 = (char *)(lVar3 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

