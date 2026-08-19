// Function: FUN_1404cb188
// Addr: 1404cb188
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb188(char *param_1)

{
  int in_EAX;
  
  *param_1 = *param_1 +
             ((byte)(in_EAX + 0xe0000a34U >> 8) ^
              (byte)((uint)*(undefined4 *)(ulonglong)(in_EAX + 0xe0000a34U) >> 8) | 0x33);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

