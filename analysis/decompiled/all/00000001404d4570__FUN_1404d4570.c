// Function: FUN_1404d4570
// Addr: 1404d4570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4570(char param_1,longlong param_2)

{
  char *pcVar1;
  int in_EAX;
  byte bVar2;
  undefined6 uVar3;
  undefined1 auStack_8 [8];
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar2 = (byte)((ulonglong)param_2 >> 8) ^ *(byte *)(param_2 * 2);
  pcVar1 = (char *)(CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) +
                   CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) * 8);
  *pcVar1 = *pcVar1 + param_1;
  *(uint *)(ulonglong)(in_EAX + 0x26003e0) =
       *(uint *)(ulonglong)(in_EAX + 0x26003e0) & (uint)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

