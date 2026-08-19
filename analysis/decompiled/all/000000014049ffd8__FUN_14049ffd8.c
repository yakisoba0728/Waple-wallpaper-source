// Function: FUN_14049ffd8
// Addr: 14049ffd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ffd8(char *param_1,undefined8 param_2)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  
  iVar2 = in_EAX + 0x30000c64;
  bVar1 = (char)iVar2 + '\x03' + (0xcffff39b < in_EAX);
  *param_1 = *param_1 + -1;
  uRam00000001344efff0 =
       uRam00000001344efff0 &
       CONCAT22((short)((uint)iVar2 >> 0x10),
                CONCAT11((char)((uint)iVar2 >> 8) + (char)((ulonglong)param_2 >> 8),
                         bVar1 + (byte)param_2 + '\x03' + CARRY1(bVar1,(byte)param_2)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

