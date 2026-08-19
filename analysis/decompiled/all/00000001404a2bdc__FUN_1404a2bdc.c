// Function: FUN_1404a2bdc
// Addr: 1404a2bdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a2c12) */

void FUN_1404a2bdc(undefined8 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar3;
  byte bVar4;
  undefined6 uVar5;
  int iVar2;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  cVar1 = (char)param_1 - (char)*param_2;
  iVar2 = CONCAT31((int3)((ulonglong)param_1 >> 8),cVar1);
  *param_2 = *param_2 + iVar2;
  bVar4 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(CONCAT44(uVar3,iVar2) + CONCAT44(uVar3,iVar2))
  ;
  *(char *)CONCAT62(uVar5,CONCAT11(bVar4,(char)param_2)) =
       *(char *)CONCAT62(uVar5,CONCAT11(bVar4,(char)param_2)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

