// Function: FUN_1404c89b4
// Addr: 1404c89b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c8a10) */

void FUN_1404c89b4(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  uRam00000001945189bc = uRam00000001945189bc & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | (byte)in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

