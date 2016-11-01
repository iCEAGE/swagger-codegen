//
// Pet.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class Pet: JSONEncodable {
    public enum Status: String { 
        case available = "available"
        case pending = "pending"
        case sold = "sold"
    }
    public var id: Int64?
    public var category: Category?
    public var name: String?
    public var photoUrls: [String]?
    public var tags: [Tag]?
    /** pet status in the store */
    public var status: Status?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["id"] = self.id?.encodeToJSON()
        nillableDictionary["category"] = self.category?.encodeToJSON()
        nillableDictionary["name"] = self.name
        nillableDictionary["photoUrls"] = self.photoUrls?.encodeToJSON()
        nillableDictionary["tags"] = self.tags?.encodeToJSON()
        nillableDictionary["status"] = self.status?.rawValue
        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
