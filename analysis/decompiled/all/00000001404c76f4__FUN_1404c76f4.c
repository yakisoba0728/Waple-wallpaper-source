// Function: FUN_1404c76f4
// Addr: 1404c76f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c76f4(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  byte *pbVar3;
  char cVar4;
  char *unaff_RBX;
  char unaff_SPL;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  pbVar3 = (byte *)(ulonglong)(in_EAX + 0x8f4U);
  unaff_RBX[0x3b] = unaff_RBX[0x3b] + cVar4;
  bVar2 = (byte)(in_EAX + 0x8f4U);
  *pbVar3 = *pbVar3 ^ bVar2;
  if ((char)*pbVar3 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_SPL;
  *pbVar3 = *pbVar3 + bVar2;
  *pbVar3 = *pbVar3 + bVar2;
  unaff_RBX[0x3b] = unaff_RBX[0x3b] + cVar4;
  *pbVar3 = *pbVar3 ^ bVar2;
  if (-1 < (char)*pbVar3) {
    bVar1 = *param_1;
    *param_1 = *param_1 + bVar2;
    *unaff_RBX = *unaff_RBX + bVar2 + CARRY1(bVar1,bVar2);
    *pbVar3 = *pbVar3 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

