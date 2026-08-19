// Function: FUN_1404b3d98
// Addr: 1404b3d98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3d98(char param_1,ulonglong param_2)

{
  char *pcVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RDI;
  bool in_ZF;
  
  LocalDescriptorTableRegister(*(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  if (!in_ZF) {
    cRam00000000681e000a = cRam00000000681e000a + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(param_2 & 0xffffffff);
  *pcVar1 = (*pcVar1 - (char)pcVar1) - (0x681e000a < *unaff_RDI);
  *pcVar1 = *pcVar1 + param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

