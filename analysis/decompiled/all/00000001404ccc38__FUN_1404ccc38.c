// Function: FUN_1404ccc38
// Addr: 1404ccc38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccc38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  char cVar4;
  byte bVar5;
  undefined6 uVar6;
  char *pcVar3;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar4 = (char)param_2;
  iVar2 = in_EAX + 0x774;
  bVar5 = (byte)((ulonglong)param_2 >> 8) ^ bRam00000001757ee943;
  cVar1 = (char)iVar2;
  pcVar3 = (char *)(ulonglong)
                   CONCAT22((short)((uint)iVar2 >> 0x10),
                            CONCAT11((char)((uint)iVar2 >> 8) + cVar4,cVar1));
  *(uint *)CONCAT62(uVar6,CONCAT11(bVar5,cVar4)) =
       *(uint *)CONCAT62(uVar6,CONCAT11(bVar5,cVar4)) | 0x21;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *(uint *)CONCAT62(uVar6,CONCAT11(bVar5 ^ bRam00000001757ee953,cVar4)) =
       *(uint *)CONCAT62(uVar6,CONCAT11(bVar5 ^ bRam00000001757ee953,cVar4)) | 0x21;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

