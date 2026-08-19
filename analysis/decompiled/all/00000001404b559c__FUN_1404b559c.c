// Function: FUN_1404b559c
// Addr: 1404b559c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b559c(longlong param_1)

{
  char *pcVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  char in_CF;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       (*(char *)CONCAT44(in_register_00000004,in_EAX) - (char)in_EAX) - in_CF;
  *(char *)(unaff_RBX + -0x72fffb68) = *(char *)(unaff_RBX + -0x72fffb68) + (char)(in_EAX >> 0x1f);
  pcVar1 = (char *)((ulonglong)(uint)(in_EAX >> 0x1f) + 0x7d000768);
  *pcVar1 = *pcVar1 + (char)in_EAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

