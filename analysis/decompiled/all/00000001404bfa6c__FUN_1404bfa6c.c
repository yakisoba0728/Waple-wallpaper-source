// Function: FUN_1404bfa6c
// Addr: 1404bfa6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfa6c(undefined8 param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int in_EAX;
  undefined1 *puVar2;
  
  bVar1 = *param_4;
  *param_4 = *param_4 + (byte)in_EAX;
  puVar2 = (undefined1 *)(ulonglong)((in_EAX + -0x11d0008) - (uint)CARRY1(bVar1,(byte)in_EAX));
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *puVar2 = *puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

