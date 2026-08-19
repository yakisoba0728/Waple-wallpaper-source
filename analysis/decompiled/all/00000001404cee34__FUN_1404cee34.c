// Function: FUN_1404cee34
// Addr: 1404cee34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cee34(char *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar3;
  ulonglong in_RAX;
  ulonglong uVar2;
  byte bVar5;
  char unaff_R12B;
  byte bVar4;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  uVar2 = in_RAX & 0xffffffffffffffed;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(uVar2 * 2) = *(char *)(uVar2 * 2) + (char)param_1;
  bVar4 = (byte)(uVar2 >> 8);
  bVar3 = bVar4 + bVar5;
  uVar1 = (int)CONCAT62((int6)(uVar2 >> 0x10),
                        CONCAT11(bVar3 * '\x02',(char)uVar2 + CARRY1(bVar4,bVar5))) + 0x16d40000 +
          (uint)CARRY1(bVar3,bVar3);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

