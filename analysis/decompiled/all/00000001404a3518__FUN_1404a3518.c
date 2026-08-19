// Function: FUN_1404a3518
// Addr: 1404a3518
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3518(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI | in_EAX;
  *(char *)(param_1 + 0x34000609) = *(char *)(param_1 + 0x34000609) + (char)(in_EAX >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(unaff_00000021,unaff_SPL) =
       *(char *)CONCAT71(unaff_00000021,unaff_SPL) + (char)in_EAX + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

