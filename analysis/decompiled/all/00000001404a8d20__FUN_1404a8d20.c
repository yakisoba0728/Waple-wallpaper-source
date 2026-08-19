// Function: FUN_1404a8d20
// Addr: 1404a8d20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8d20(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  uint in_EAX;
  ulonglong uVar4;
  byte bVar6;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESP;
  undefined4 unaff_00000024;
  ulonglong unaff_RBP;
  uint *puVar5;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  uVar4 = unaff_RBP & 0xffffffff;
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) = *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + -1;
  cVar3 = (char)uVar4;
  puVar5 = (uint *)CONCAT62((int6)(uVar4 >> 0x10),
                            CONCAT11((char)(uVar4 >> 8) + (char)unaff_EBX,cVar3));
  *puVar5 = *puVar5 & (uint)puVar5;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  LOCK();
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) = *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + -1;
  UNLOCK();
  pcVar2 = (char *)((ulonglong)in_EAX - 0x23fff401);
  *pcVar2 = *pcVar2 + (char)param_2;
  *puVar5 = *puVar5 + unaff_EBX;
  *puVar5 = *puVar5 | (uint)puVar5;
  pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (ulonglong)in_EAX);
  *pcVar2 = *pcVar2 - bVar6;
  *(char *)puVar5 = (char)*puVar5 + (char)unaff_EBX;
  *(int *)((longlong)puVar5 * 2) = *(int *)((longlong)puVar5 * 2) + unaff_ESP;
  pbVar1 = (byte *)((CONCAT71((int7)((ulonglong)puVar5 >> 8),cVar3) | 0xe0) + 7);
  *pbVar1 = *pbVar1 | bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

