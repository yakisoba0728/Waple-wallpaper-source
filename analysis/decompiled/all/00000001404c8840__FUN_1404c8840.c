// Function: FUN_1404c8840
// Addr: 1404c8840
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8840(undefined8 param_1,uint *param_2,char param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined7 uVar6;
  char *in_RAX;
  undefined4 uVar7;
  char unaff_BH;
  uint unaff_EDI;
  bool in_SF;
  uint *puVar5;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (!in_SF) {
    *in_RAX = *in_RAX + (char)in_RAX;
    uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
    cVar4 = (char)in_RAX + (char)((ulonglong)in_RAX >> 8);
    puVar5 = (uint *)CONCAT71(uVar6,cVar4);
    *(char *)puVar5 = (char)*puVar5 + (char)param_2;
    LOCK();
    puVar2 = (undefined4 *)((longlong)puVar5 * 2 + 0x21);
    uVar3 = *puVar2;
    *puVar2 = (int)param_1;
    UNLOCK();
    *(char *)puVar5 = (char)*puVar5 + cVar4;
    *(char *)puVar5 = (char)*puVar5 + (char)param_2;
    *(char *)((longlong)param_2 + 0x1b) = *(char *)((longlong)param_2 + 0x1b) + (char)uVar3;
    *puVar5 = *puVar5 ^ (uint)puVar5;
    *(char *)CONCAT44(uVar7,uVar3) = *(char *)CONCAT44(uVar7,uVar3) + param_3;
    *param_2 = *param_2 | (uint)CONCAT71(uVar6,cVar4 + -0x79);
    *(char *)CONCAT44(uVar7,uVar3) = *(char *)CONCAT44(uVar7,uVar3) + (char)uVar3;
    puVar5 = (uint *)(CONCAT44(uVar7,uVar3) + 0xe);
    *puVar5 = *puVar5 & unaff_EDI;
    pcVar1 = (char *)(CONCAT44(uVar7,uVar3) + -0x2c);
    *pcVar1 = *pcVar1 + unaff_BH;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

