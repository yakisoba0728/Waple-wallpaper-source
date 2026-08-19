// Function: FUN_1404b3984
// Addr: 1404b3984
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3984(undefined8 param_1)

{
  int in_EAX;
  longlong unaff_RDI;
  
  cRam000000015c4b4159 = cRam000000015c4b4159 + (char)((uint)(in_EAX + 0x6d82f00) >> 8);
  uRam00000000a8130008 = uRam00000000a8130008 | 0xa8130008;
  *(char *)(unaff_RDI + 0x36340aeb) =
       *(char *)(unaff_RDI + 0x36340aeb) + (char)param_1 + (char)((ulonglong)param_1 >> 8);
  bRam0000000036130aa0 = bRam0000000036130aa0 | 0xa0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

