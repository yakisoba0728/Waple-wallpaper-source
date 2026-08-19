// Function: FUN_14049f558
// Addr: 14049f558
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f558(longlong param_1,int *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_EAX;
  
  bVar2 = (byte)in_EAX & *(byte *)(param_1 + -0xbcbffff);
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar2;
  iRam00000001484b0667 =
       iRam00000001484b0667 + CONCAT31((int3)((uint)in_EAX >> 8),bVar2) + (uint)CARRY1(bVar1,bVar2);
  *param_2 = *param_2 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

