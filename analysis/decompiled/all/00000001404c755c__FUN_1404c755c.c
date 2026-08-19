// Function: FUN_1404c755c
// Addr: 1404c755c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c755c(byte *param_1)

{
  int iVar1;
  int in_EAX;
  char *pcVar2;
  char unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RSI;
  bool in_ZF;
  undefined8 in_MM1;
  
  if (!in_ZF) {
    *param_1 = *param_1 + (byte)in_EAX;
    iVar1 = *unaff_RSI;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((ulonglong)param_1 >> 8);
    pcVar2 = (char *)((ulonglong)(uint)(in_EAX - iVar1) ^ 3);
    *pcVar2 = *pcVar2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 ^ (byte)in_EAX;
  pshufw(in_MM1,*(undefined8 *)unaff_RSI,0x60);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

