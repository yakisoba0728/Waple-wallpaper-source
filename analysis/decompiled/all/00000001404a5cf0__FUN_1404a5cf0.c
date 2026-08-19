// Function: FUN_1404a5cf0
// Addr: 1404a5cf0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5cf0(char *param_1,char *param_2)

{
  char in_AL;
  char cVar1;
  byte bVar2;
  undefined7 in_register_00000001;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  
  *(undefined1 *)(unaff_RSI + -0x5113fff8) = 0;
  cVar1 = in_AL + (char)((ulonglong)unaff_RBX >> 8);
  *param_1 = *param_1 + '\b';
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  bVar2 = cVar1 * '\x02';
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(byte *)CONCAT71(in_register_00000001,bVar2) | bVar2;
  bVar2 = in((short)param_2);
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(byte *)CONCAT71(in_register_00000001,bVar2) | bVar2;
  *param_1 = *param_1 + '\x10';
  *param_2 = *param_2 + (char)param_1;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

