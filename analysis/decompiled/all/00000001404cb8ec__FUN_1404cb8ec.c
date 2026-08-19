// Function: FUN_1404cb8ec
// Addr: 1404cb8ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb8ec(char *param_1,undefined8 param_2)

{
  char cVar1;
  char *in_RAX;
  byte bVar2;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) ^ bVar2;
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar1;
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[0x5e00342e] = in_RAX[0x5e00342e] + cVar1;
  *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) ^ bVar2;
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

