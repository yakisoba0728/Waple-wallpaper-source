// Function: FUN_1404a2bcc
// Addr: 1404a2bcc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a2c12) */

void FUN_1404a2bcc(undefined8 param_1,int *param_2)

{
  int in_EAX;
  uint uVar1;
  char cVar3;
  undefined4 uVar5;
  byte bVar6;
  undefined6 uVar7;
  uint *puVar2;
  int iVar4;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar1 = in_EAX + 0xc4000568;
  puVar2 = (uint *)(ulonglong)uVar1;
  iVar4 = *param_2;
  *puVar2 = *puVar2 & uVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
  cVar3 = ((char)param_1 - (char)iVar4) - (char)*param_2;
  iVar4 = CONCAT31((int3)((ulonglong)param_1 >> 8),cVar3);
  *param_2 = *param_2 + iVar4;
  bVar6 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(CONCAT44(uVar5,iVar4) + CONCAT44(uVar5,iVar4))
  ;
  *(char *)CONCAT62(uVar7,CONCAT11(bVar6,(char)param_2)) =
       *(char *)CONCAT62(uVar7,CONCAT11(bVar6,(char)param_2)) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

