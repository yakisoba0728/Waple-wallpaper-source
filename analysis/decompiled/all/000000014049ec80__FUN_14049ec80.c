// Function: FUN_14049ec80
// Addr: 14049ec80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ec80(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  byte bVar5;
  int *in_RAX;
  undefined1 *puVar4;
  char cVar6;
  char cVar7;
  byte unaff_DIL;
  
  cVar7 = (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX + (int)in_RAX;
  puVar4 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  cVar1 = (char)in_RAX;
  *param_4 = *param_4 + cVar1;
  *puVar4 = *puVar4;
  *param_1 = 0;
  bVar5 = (byte)((ulonglong)puVar4 >> 8);
  cVar6 = (char)param_1 + bVar5;
  *(undefined1 *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar7,cVar6)) = 0;
  iVar2 = (int)CONCAT71(CONCAT61((int6)((ulonglong)puVar4 >> 0x10),bVar5 + unaff_DIL),
                        CARRY1(bVar5,unaff_DIL) + -0x1c) + 0xdc40500;
  uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + -1);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar7;
  uVar3 = uVar3 + 0x13c7ffff;
  *param_4 = *param_4 + cVar1;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + -1);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar7;
  uVar3 = uVar3 + 0x13c7ffff;
  *param_4 = *param_4 + cVar1;
  *(char *)((ulonglong)uVar3 * 2) = *(char *)((ulonglong)uVar3 * 2) + cVar6;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11(((char)(uVar3 >> 8) + (char)((ulonglong)param_2 >> 8)) * '\x02',
                            (char)uVar3)) + 0x6d40000;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

