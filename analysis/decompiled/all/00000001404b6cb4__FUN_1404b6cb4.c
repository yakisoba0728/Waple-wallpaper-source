// Function: FUN_1404b6cb4
// Addr: 1404b6cb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6cb4(longlong param_1)

{
  int iVar1;
  int in_EAX;
  char *pcVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  
  pcVar2 = (char *)(ulonglong)(in_EAX + 0xb8000f64U);
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + -0x33ffe41d) = *(char *)(unaff_RDI + -0x33ffe41d) + unaff_BH;
  iVar1 = *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *pcVar2 = *pcVar2 + (char)(in_EAX + 0xb8000f64U);
  pcVar2[-0x40ffe41d] = pcVar2[-0x40ffe41d] + unaff_BH;
  if (iVar1 * 0x21 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

