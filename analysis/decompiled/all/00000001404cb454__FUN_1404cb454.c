// Function: FUN_1404cb454
// Addr: 1404cb454
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb454(char *param_1,char *param_2)

{
  uint3 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined2 uVar6;
  uint *puVar5;
  
  uVar6 = SUB82(param_2,0);
  uVar2 = in(uVar6);
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
  uVar4 = (uint)puVar5 ^ *puVar5;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  *param_2 = *param_2 + 'L';
  uVar1 = (uint3)(uVar4 >> 8);
  uVar2 = in(uVar6);
  uVar3 = in(uVar6);
  uVar4 = CONCAT31(uVar1 ^ (uint3)((uint)*(undefined4 *)(ulonglong)CONCAT31(uVar1,uVar2) >> 8),uVar3
                  );
  uVar4 = uVar4 ^ *(uint *)(ulonglong)uVar4;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *param_2 = *param_2 + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

