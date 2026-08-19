// Function: FUN_140219c60
// Addr: 140219c60
// Size: 73 bytes


void FUN_140219c60(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_5 <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(param_3,param_1,param_2 - (longlong)param_1);
  }
  puVar1 = param_1 + param_4;
  lVar6 = param_4 * 2;
  if (param_5 - param_4 < param_4) {
    lVar6 = param_5;
  }
  puVar2 = param_1 + lVar6;
  puVar5 = puVar1;
  do {
    cVar4 = (*param_6)(puVar5,param_1);
    if (cVar4 == '\0') {
      uVar3 = *param_1;
      param_1 = param_1 + 1;
      *param_3 = uVar3;
      if (param_1 == puVar1) {
        lVar6 = (longlong)puVar2 - (longlong)puVar5;
        goto code_r0x000140219d23;
      }
    }
    else {
      uVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      *param_3 = uVar3;
      if (puVar5 == puVar2) {
        lVar6 = (longlong)puVar1 - (longlong)param_1;
        puVar5 = param_1;
code_r0x000140219d23:
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(param_3 + 1,puVar5,lVar6);
      }
    }
    param_3 = param_3 + 1;
  } while( true );
}

