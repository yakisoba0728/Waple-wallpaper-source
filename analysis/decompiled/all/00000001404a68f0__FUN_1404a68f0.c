// Function: FUN_1404a68f0
// Addr: 1404a68f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a68f0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar4;
  uint *in_RAX;
  uint *puVar3;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  ulonglong unaff_RBX;
  char in_CF;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar5 = (char)param_1;
  cVar9 = ((char)param_2 - *(char *)(unaff_RBX - 0x6b5dfff7)) - in_CF;
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(undefined1 *)(longlong)(int)param_1 = *(undefined1 *)(longlong)(int)param_1;
  uVar2 = (uint)in_RAX + 0xed99a202;
  cVar6 = (char)((ulonglong)param_1 >> 8) + (char)uVar2;
  puVar3 = (uint *)((ulonglong)&stack0x00000000 & 0xffffffff);
  *puVar3 = *puVar3 | (uint)&stack0x00000000;
  *(char *)((longlong)puVar3 + 0x4a) = *(char *)((longlong)puVar3 + 0x4a) + cVar6;
  cVar4 = (char)((ulonglong)puVar3 >> 8);
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) + cVar4;
  *(char *)puVar3 = (char)*puVar3;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar10,cVar9)) +
                   -0x3afff66c);
  *pcVar1 = *pcVar1 + cVar4;
  puVar3 = (uint *)(ulonglong)uVar2;
  *puVar3 = *puVar3 | uVar2;
  *(char *)((longlong)puVar3 + 0x4a) = *(char *)((longlong)puVar3 + 0x4a) + cVar6;
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) + (char)(uVar2 >> 8);
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
  *(char *)puVar3 = (char)*puVar3 + cVar9;
  puVar3 = (uint *)(unaff_RBX & 0xffffffff);
  *puVar3 = *puVar3 | (uint)unaff_RBX;
  *(undefined1 *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) =
       *(undefined1 *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5)));
  *(char *)((longlong)puVar3 * 2) = *(char *)((longlong)puVar3 * 2) + cVar5;
  uVar2 = (int)CONCAT62((int6)((ulonglong)puVar3 >> 0x10),
                        CONCAT11(((char)((ulonglong)puVar3 >> 8) + cVar10) * '\x02',(char)puVar3)) +
          0x6d40000;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

