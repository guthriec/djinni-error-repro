// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from local_interface.djinni


export interface ConcernService {
    getConcern(concernId: bigint): RenderableConcern;
}
export interface ConcernService_statics {
    create(): ConcernService;
}

export interface Core_statics {
    ConcernService: ConcernService_statics;
}
