// Function: FUN_1404b85d0
// Addr: 1404b85d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b85d0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  longlong in_FS_OFFSET;
  char in_CF;
  bool in_SF;
  
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar2 = in_AL + *(char *)(in_FS_OFFSET + CONCAT71(in_register_00000001,in_AL)) + in_CF;
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,cVar2) + param_2);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

